//
//  GSPackageManager.h
//  SDK
//
//  Created by gongtao on 2018/3/9.
//  Copyright © 2018年 goodsogood. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@interface GSPackageManager : NSObject

#pragma mark - 数据存取
+ (void)download;
+ (Group_ModuleModel *)queryModuleWhereModuleID:(NSString *)moduleID;
+ (Group_ModuleModel *)queryModuleWhereAppId:(NSString *)appId;
+ (NSArray <Group_ModuleModel *> *)queryModuleGroupWithAreaPostion:(NSString *)areaPosition;
+ (NSArray <Group_ModuleModel *> *)queryModuleWhereModuleareaPositionGroups:(NSArray *)areaPositions;
+ (NSArray <GS_BannerModel *> *)queryBannerModelWith:(NSString *)areaPosition;

#pragma mark - 数据加载
+ (void)configBeforeLoad:(NSString *)openid location:(CLLocation *)location;
+ (void)loadModuleWithModuleProId:(id)moduleProId completionHandler:(void(^)(UIViewController *reactNativeVC))completionHandler;
+ (void)loadBannerModule:(GS_BannerModel *)model completionHandler:(void(^)(UIViewController *reactNativeVC))completionHandler;
+ (void)loadModule:(Group_ModuleModel *)model;
+ (void)loadBanner:(GS_BannerModel *)model;

+ (void)luanch;

@end
