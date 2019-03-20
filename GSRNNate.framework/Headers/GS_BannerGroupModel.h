//
//  GS_BannerGroupModel.h
//  CQLabourUnion
//
//  Created by lilly on 2017/9/28.
//  Copyright © 2017年 edusign. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GS_BannerModel;

@interface GS_BannerGroupModel : NSObject

//groupId //模块组ID
//groupName //模块组名
//appPlatform //所在平台1安卓2IOS
//areaId //app区域ID
//showTotalNum//展示总数
//showEvyNum//每天展示次数
//showTime//展示时长
//advertType//广告类型1、主banner,2-文字，3-普通banner，4-广告组，5-启屏，6-弹窗
//advertGroupType//广告组模式类型1表示上一下三,2表示上一下二

@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *appPlatform;
@property (nonatomic, copy) NSString *areaId;
@property (nonatomic, copy) NSString *areaName;
@property (nonatomic, copy) NSString *areaPosition;
@property (nonatomic, copy) NSString *areaType;
@property (nonatomic, copy) NSString *showTotalNum;
@property (nonatomic, copy) NSString *showEvyNum;
@property (nonatomic, copy) NSString *showTime;
@property (nonatomic, copy) NSString *advertType;
@property (nonatomic, copy) NSString *advertGroupType;
@property (nonatomic, copy) NSString *sort;
@property (nonatomic, copy) NSString *moduleCount;
@property (nonatomic, copy) NSString *placeHolderName;
@property (nonatomic, strong) NSArray<GS_BannerModel *> *modules;

@end
