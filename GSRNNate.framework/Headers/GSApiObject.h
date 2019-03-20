//
//  GSApiObject.h
//  SDK
//
//  Created by yang li on 2018/5/31.
//  Copyright © 2018年 goodsogood. All rights reserved.
//

#ifndef GSApiObject_h
#define GSApiObject_h

typedef NS_ENUM(NSInteger, GSRechargeWay) {
    GSRechargeAlipay,
    GSRechargeWXpay,
    GSRechargeGiftcard,
    GSRechargeCardbook,
    GSRechargeH5,
};

/** 充值订单Model */
@interface GSRechargeRequestModel : NSObject

/** 支付方式 */
@property (nonatomic, assign) GSRechargeWay rechargeWay;

/** 订单数据 */
@property (nonatomic, strong) id rechargeData;

@end

/** 充值订单返回Model */
@interface GSRechargeResponsModel : NSObject

/** 支付方式 */
@property (nonatomic, assign) GSRechargeWay rechargeWay;

/** 返回code */
@property (nonatomic, assign) NSInteger code;

/** 充值订单号 */
@property (nonatomic, copy) NSString *outTradeNo;

@end


#endif /* GSApiObject_h */
