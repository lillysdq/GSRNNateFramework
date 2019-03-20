//
//  Group_GroupDataList.h
//  GSPay
//
//  Created by lilly on 2017/6/6.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Group_ModuleModel;

@interface Group_GroupDataList : NSObject

@property (nonatomic, copy) NSString *areaPosition;
@property (nonatomic, copy) NSString *groupCode;
@property (nonatomic, copy) NSString *groupIcon;
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *sort;
@property (nonatomic, copy) NSString *placeHolderName;
@property (nonatomic, strong) NSArray<Group_ModuleModel *> *modules;

@end
