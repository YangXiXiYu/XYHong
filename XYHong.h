//
//  XYHong.h
//  LearningPlatform
//
//  Created by pro on 2019/6/6.
//  Copyright © 2019 Liu Xiangyu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define APP_LICATION         [UIApplication sharedApplication]
#define Key_Window          [UIApplication sharedApplication].keyWindow
#define User_Defaults       [NSUserDefaults standardUserDefaults]
#define Notification_Center [NSNotificationCenter defaultCenter]
//获取temp
#define Path_Temp           NSTemporaryDirectory()
//获取沙盒 Document
#define Path_Document       [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
//获取沙盒 Cache
#define Path_Cache          [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]
//判断是否iPhone X
#define IS_iPhoneX              ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 状态栏高度
#define StatusBar_Height        (IS_iPhoneX ? 44.f : 20.f)
// 顶部导航栏高度
#define NavigationBar_Height    44.f
// 顶部安全距离
#define SafeArea_TopHeight      (IS_iPhoneX ? 88.f : 64.f)
// 底部安全距离
#define SafeArea_BottomHeight   (IS_iPhoneX ? 34.f : 0.f)
// Tabbar高度
#define Tabbar_Height           49.f
//偏移量
#define PIAN_YI_OK if ([self respondsToSelector:@selector(edgesForExtendedLayout)]) { \
self.edgesForExtendedLayout = UIRectEdgeBottom; \
};
//系统版本
#define SYSTEM_VERSON [UIDevice currentDevice].systemVersion.doubleValue
//app色值
#define APP_COLOR [UIColor colorWithRed:21/255.0 green:118/255.0 blue:228/255.0 alpha:1]
#define APP_YELCOLOR [UIColor colorWithRed:254/255.0 green:181/255.0 blue:114/255.0 alpha:1]
#define APP_BACCOLOR [UIColor colorWithRed:245/255.0 green:245/255.0 blue:245/255.0 alpha:1]
#define APP_RedCOLOR [UIColor colorWithRed:240/255.0 green:57/255.0 blue:64/255.0 alpha:1]
#define APP_GreenCOLOR [UIColor colorWithRed:45/255.0 green:189/255.0 blue:118/255.0 alpha:1]
#define Text33_COLOR [UIColor colorWithRed:51/255.0 green:51/255.0 blue:51/255.0 alpha:1]
#define Text97_COLOR [UIColor colorWithRed:151/255.0 green:151/255.0 blue:151/255.0 alpha:1]
#define Text66_COLOR [UIColor colorWithRed:102/255.0 green:102/255.0 blue:102/255.0 alpha:1]
#define Textcc_COLOR [UIColor colorWithRed:204/255.0 green:204/255.0 blue:204/255.0 alpha:1]
#define Texte5_COLOR [UIColor colorWithRed:213/255.0 green:213/255.0 blue:213/255.0 alpha:1]
#define Textf7_COLOR [UIColor colorWithRed:245/255.0 green:245/255.0 blue:245/255.0 alpha:1]
//字体适配
#define Scale_Font(fontSize) [UIFont systemFontOfSize: fontSize*US_W/375]

//屏幕尺寸
#define US_W [UIScreen mainScreen].bounds.size.width
#define US_H [UIScreen mainScreen].bounds.size.height
//带有RGBA的颜色设置
#define COLOR_RGBA(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
//6为标准适配的,如果需要其他标准可以修改
#define Scale_W(w) ((US_W)/375) * (w)
#define Scale_H(h) (US_H/667) * (h)
//跳转到登录
#define JUMP_LOGIN_VIEWCONTROLLER if ([json[@"code"] intValue] == -1 || [json[@"code"] intValue] == -2) {\
[[NSUserDefaults standardUserDefaults]removeObjectForKey:@"token"];\
[UIApplication sharedApplication].keyWindow.rootViewController = [[LoginViewController alloc]init];\
}else{\
[UIView showAddCenterLabelViewWithStr:json[@"msg"]];\
}
//请求失败
#define Request_Failure [UIView showAddCenterLabelViewWithStr:@"网络繁忙，请稍后再试！"];
//push
#define PUSH(newViewController) [self.navigationController pushViewController:[[newViewController alloc] init] animated:YES];
//pop
#define POP_TO_UP [self.navigationController popViewControllerAnimated:YES];
#define POP_TO_ROOT [self.navigationController popToRootViewControllerAnimated:YES];

@interface XYHong : NSObject

@end

NS_ASSUME_NONNULL_END
