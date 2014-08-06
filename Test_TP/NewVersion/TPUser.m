//
//  TPUser.m
//  Test_TP
//
//  Created by apple on 14-7-24.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import "TPUser.h"

@implementation TPUser

- (id)init
{
    if (self = [super init]) {
        self = [super init];
    }
    
    NSMutableDictionary *tmpDict = [[NSMutableDictionary alloc] init];
    self.userKeyDictionary = tmpDict;
    
    [tmpDict release];
    tmpDict = [[NSMutableDictionary alloc] init];
    
    if(!self.userSessionIDDictionary)
        self.userSessionIDDictionary = tmpDict;
    [tmpDict release];
    return self;
}

- (void)dealloc
{
    [_userName release];
    [_userKeyDictionary release];
    [_userNickName release];
    [_userPassword release];
    [_userSessionIDDictionary release];
    [_privileges release];
    [super dealloc];
}
@end
