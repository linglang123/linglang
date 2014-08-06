//
//  TPGlobarUser.h
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TPGlobarUser, TPUser;

@interface TPGlobarUser : NSObject
@property (nonatomic, retain) TPUser *user;
@property (nonatomic, retain) NSString *URL_WEB_APP;

// 预览页面
@property (nonatomic, retain) NSString *URL_OF_POLICY_PREVIEW;

// 立保通
@property (nonatomic, retain) NSString *URL_OF_POLICY_SERVER;

// 更新
@property (nonatomic, retain) NSString *URL_APP_PLIST;
@property (nonatomic, retain) NSString *URL_APP_DOWNLOAD;
@property (nonatomic, retain) NSString *EVISIT_VOICE_URL; // E回访语音播报地址

// lbb
@property (nonatomic, retain) NSString *noteCount;
@property (nonatomic, retain) NSString *noteCountStep;
+ (TPGlobarUser *)sharedInstance;
- (void)updateURL:(NSString *)theUrl;
@end
