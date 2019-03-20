//
//  Group_ModuleModel.h
//  GSPay
//
//  Created by lilly on 2017/6/6.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Group_GroupDataList.h"

typedef NS_ENUM(NSInteger, GS_LuckyBagModuleType) {
    GS_LuckyBagModuleTypeYouPin = 0,
    GS_LuckyBagModuleTypeTaoCan,
    GS_LuckyBagModuleTypePuHui
};

@interface Group_ModuleModel : Group_GroupDataList
@property (nonatomic, copy) NSString *appPlatform;
@property (nonatomic, copy) NSString *configParam;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *isRollback;
@property (nonatomic, copy) NSString *isThird;
@property (nonatomic, copy) NSString *mchAppId;
@property (nonatomic, copy) NSString *moduleAlias;
@property (nonatomic, copy) NSString *moduleAppId;
@property (nonatomic, copy) NSString *moduleEnv;
@property (nonatomic, copy) NSString *moduleIconUrl;
@property (nonatomic, copy) NSString *moduleIsLast;
@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, copy) NSString *modulePropId;
@property (nonatomic, copy) NSString *moduleSize;
@property (nonatomic, copy) NSString *moduleSort;
@property (nonatomic, copy) NSString *moduleType;
@property (nonatomic, copy) NSString *moduleVersionCode;
@property (nonatomic, copy) NSString *moduleVersionName;
@property (nonatomic, copy) NSString *pkgUrl;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, copy) NSString *hash1;
@property (nonatomic, copy) NSString *lastRecordVersionCode;
@property (copy, nonatomic) NSString *subtitle;
@property (assign, nonatomic) GS_LuckyBagModuleType luckBagModuldType;

/**
 下载进度
 */
@property (assign, nonatomic) float progress;

/**
 是否需要下载
 */
@property (nonatomic, copy) NSString *isNeedDownload;

/**
 随机字符串
 */
@property (nonatomic, copy) NSString *randomStr;

/**
 比率
 */
@property (nonatomic, strong) NSNumber *ratio;

/**
 高度
 */
@property (nonatomic, strong) NSNumber *height;

@end
