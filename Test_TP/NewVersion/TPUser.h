//
//  TPUser.h
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TPUser : NSObject
@property (nonatomic, retain) NSString *userPassword;
@property (nonatomic, retain) NSString *userName; // 用户名
@property (nonatomic, retain) NSString *userNickName; // 昵称
@property (nonatomic, retain) NSMutableDictionary *userKeyDictionary; // key：0电子投保 1建议书
@property (nonatomic, retain) NSMutableDictionary *userSessionIDDictionary; // key：0电子投保 1建议书
// E-回访
@property (nonatomic, retain) NSString *privileges; // 用户权限（有些功能，如建议书 不可使用）
@end
