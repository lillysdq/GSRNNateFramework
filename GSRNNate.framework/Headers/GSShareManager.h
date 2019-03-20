//
//  GSShareManager.h
//  SDK
//
//  Created by gongtao on 2018/3/15.
//  Copyright © 2018年 goodsogood. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger) {
    ShareTypeWXcircle = 1,
    ShareTypeWXfriend,
    ShareTypeQQzone,
    ShareTypeQQfriend,
    ShareTypeDingding,
    ShareTypeLink
} ShareType;

typedef void (^Handler) (ShareType type);

@interface GSShareManager : NSObject

+ (instancetype)share;
- (void)construct:(ShareType)type, ...NS_REQUIRES_NIL_TERMINATION;
- (void)presentWithHandler:(Handler)handler;

@end
