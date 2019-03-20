//
//  GS_BannerModel.h
//  CQLabourUnion
//
//  Created by lilly on 2017/9/28.
//  Copyright © 2017年 edusign. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GS_BannerGroupModel.h"

@interface GS_BannerModel : GS_BannerGroupModel

@property (nonatomic, copy) NSString *configParam;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *isRollback;
@property (nonatomic, copy) NSString *isThird;
@property (nonatomic, copy) NSString *moduleAlias;
@property (nonatomic, copy) NSString *moduleAppId;
@property (nonatomic, copy) NSString *moduleEnv;
@property (nonatomic, copy) NSString *moduleIconUrl;
@property (nonatomic, copy) NSString *moduleIsLast;
@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, copy) NSString *modulePropId;
@property (nonatomic, copy) NSString *moduleSort;
@property (nonatomic, copy) NSString *moduleType;
@property (nonatomic, copy) NSString *moduleVersionCode;
@property (nonatomic, copy) NSString *moduleVersionName;
@property (nonatomic, copy) NSString *pkgUrl;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, copy) NSString *mchAppId;
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, copy) NSString *sha;
@property(assign, nonatomic) double ratio;

/**
 随机字符串
 */
@property (nonatomic, copy) NSString *randomStr;

@end
