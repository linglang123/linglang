//
//  TPAppDelegate.h
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//
//  UIDeviceOrientation      是机器硬件的当前旋转方向   这个只能取值 不能设置
//  UIInterfaceOrientation   程序界面的当前旋转方向   这个可以设置

#import <UIKit/UIKit.h>
@class TPViewController;

@interface TPAppDelegate : UIResponder <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;

@property (nonatomic, retain) TPViewController *viewController;

@property (nonatomic, retain) UINavigationController *navigationController;

@property (nonatomic, assign) UIInterfaceOrientation *appInterfaceOrientation;

@property (nonatomic, assign) BOOL isInterfaceOrientation; // 当前设备是否旋转

@property (nonatomic, retain) NSString *introductionAppContent; // 显示版本内容变量

@property (nonatomic, assign) BOOL isNewVersion; // 判断服务器是否又有新版本

- (void)getVersion;
- (void)createVersionFile;
@end
