//
//  TPAppDelegate.m
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#import "TPAppDelegate.h"
#import "TPViewController.h"
#import "ASIHTTPRequest.h"
#import "TPGlobarUser.h"

@implementation TPAppDelegate

- (void)dealloc
{
    [_window release];
    [_viewController release];
    [_navigationController release];
    [_introductionAppContent release];
    [super dealloc];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]] autorelease];
    // Override point for customization after application launch.
    
    // 判断当前用户使用的设备是iPhone 还是iPad
    if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
    {
        self.viewController = [[[TPViewController alloc] initWithNibName:@"ViewController_iPhone" bundle:nil] autorelease];
    }else{
        self.viewController = [[[TPViewController alloc] initWithNibName:@"ViewController_iPad" bundle:nil] autorelease];
    }
    
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:_viewController];
    
    [self.window setRootViewController:self.navigationController];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    // 判断是否又有新版本
    [self getVersion];
    return YES;
}

#pragma mark 判断是否又有新版本
- (void)getVersion
{
    NSString *path = [[NSBundle mainBundle] pathForResource:@"XML_Obj" ofType:@"plist"];
    NSDictionary *dict = [NSDictionary dictionaryWithContentsOfFile:path];
    float version = [[dict valueForKey:@"Version"] floatValue];
    
    ASIHTTPRequest *request = [ASIHTTPRequest requestWithURL:[NSURL URLWithString:[TPGlobarUser ]]
    
}

#pragma mark 是否是第一次打开应用软件，是打开版本内容介绍，否不打开
- (void)createVersionFile
{
#warning 待写
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
