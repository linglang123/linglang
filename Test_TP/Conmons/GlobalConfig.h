//
//  GlobalConfig.h
//  NewTaiPing
//
//  Created by StarZhang on 4/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#import "EisinsuConfig.h"
#import "AppDelegate.h"
#import "TSessionInfo.h"

#define ZhangTest

#ifdef DEBUG
#  define DLog(fmt, ...) do { NSString* file = [[NSString alloc] initWithFormat:@"%s", __FILE__]; NSLog((@"%@(%d) " fmt), [file lastPathComponent], __LINE__, ##__VA_ARGS__); [file release]; } while(0)
#  define DLog_METHOD NSLog(@"%s", __func__)
#  define DLog_CMETHOD NSLog(@"%@/%@", NSStringFromClass([self class]), NSStringFromSelector(_cmd))
#  define COUNT(p) NSLog(@"%s(%d): count = %d/n", __func__, __LINE__, [p retainCount]);
#  define DLog_TRACE(x) do {printf x; putchar('/n'); fflush(stdout);} while (0)
#else
#  define DLog(...)
#  define DLog_METHOD
#  define DLog_CMETHOD
#  define COUNT(p)
#  define DLog_TRACE(x)
#endif



//UAT
#define URL_WEB_APP_UAT                  @"http://intest.life.cntaiping.com"

////默认是生产环境
//#define URL_WEB_APP_PRD                 @"http://emall.life.cntaiping.com"

//预上线
//#define URL_WEB_APP_PRD                 @"http://intest.life.cntaiping.com:8080"

//如果发布PRD，则注释下面一行
#define URL_WEB_APP_PRD                 URL_WEB_APP_UAT




#define WEBDIVIDEND_PDF_URL  @"http://10.7.204.15:8888/annualDividend/dividend/manageDownLoadOfPDF.do?anndivId=%@"

//3G
//#define WEBDIVIDEND_PDF_URL  @"http://10.7.204.15:8888/annualDividend/dividend/manageDownLoadOfPDF.do?anndivId=%@"



#define degreesToRadians(X) (M_PI*(X)/180.0)


#define kDictionaryValue            @"name"
#define kDictionaryCode              @"code"


#define TAG_OF_FOOTER_BUTTON         1 //更多按钮的tag

#define HEIGHT_OF_FOOTERVIEW         60.0f //加载更多view的高度

#define HEIGHT_FOR_ROW               100.0f //cell的高度
#define HEIGHT_FOR_ROW_TEXT               116.0   //文字模式cell的高度


#define RIGHR_BARBUTTONITEM_HEIGHT          30.0


#define app_delegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])

//add by wangyubo  缓存文件扩展名
#define TMP_EXT @".tmp"

#define User_Type_JYS @"1"          //立保通
#define User_Type_CFT @"2"          //财付通

#define BANKINSU_COMMONSELL @"2001"//银险非直销   
#define BANKINSU_DIRECTSELL @"2002"//银险直销

