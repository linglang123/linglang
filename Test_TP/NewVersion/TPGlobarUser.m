//
//  TPGlobarUser.m
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import "TPGlobarUser.h"

static TPGlobarUser *globarUser = nil;
@implementation TPGlobarUser
+ (TPGlobarUser *)sharedInstance
{
    if(!globarUser)
    {
        globarUser = [[TPGlobarUser alloc] init];
        
        [TPGlobarUser sharedInstance].URL_WEB_APP = URL_WEB_APP_PRD;
        [globarUser updateURL:globarUser.URL_WEB_APP];
    }
    return globarUser;
}

- (void)updateURL:(NSString *)theUrl
{
    globarUser.URL_OF_POLICY_PREVIEW = [NSString stringWithFormat:@"%@/einsu/ipad/policyView.do?", theUrl];
    globarUser.URL_OF_POLICY_SERVER = [NSString stringWithFormat:@"%@/einsu/xmlServer.svs?clientType=1", theUrl];
    globarUser.URL_APP_PLIST = [NSString stringWithFormat:@"%@/einsu/app/NewTaiPing.plist", theUrl];
    globarUser.URL_APP_DOWNLOAD = [NSString stringWithFormat:@"%@/mobile/download?sAction=loadIos&appType=5", theUrl];
}

////////
- (void)dealloc
{
    
    [super dealloc];
}
@end
