//
//  HypersConsentManagerSDK.h
//  HypersConsentManagerSDK
//
//  Created by 梁磊 on 2020/8/6.
//  Copyright © 2020 梁磊. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HypersConsentManagerSDK/HyPrivacyViewController.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    HyPrivacySaveConfirm,
    HyPrivacySaveReject,
} HyPrivacySaveStatus;

@protocol HCMAgentDelegate <NSObject>

@optional

-(void)didClickSavePrivacySetting;

@end

@interface HCMAgent : NSObject<HCMAgentDelegate>

+ (instancetype)shared;

@property (nonatomic, strong) UIColor *themeColor;

@property (nonatomic, strong) UIFont *titleFont;

@property (nonatomic, strong) UIFont *contentFont;

@property (nonatomic, strong) UIFont *privacyTitleFont;

@property (nonatomic, strong) UIFont *privacyContentFont;

@property (nonatomic, strong) NSDictionary *propertyDic;


+ (void)start;

//展示隐私条款
+(HyPrivacyViewController *)display;

//是否可以展示
+(BOOL)isShowPrivacyVC;

//设置回调代理
+ (BOOL)setDelegate:(id)delegate;

//获取用户选择条款详情
+(NSString *)getUserSelectdetail;

//设置自定义属性
+(void)setCustomProperty:(NSDictionary *)propertyDic;

//删除数据
+(void)deleteData;


-(void)getClauses;

@end
