# GSRNNateFramework

麦卡福利社 核心SDk

## 安装

### CocoaPods

```ruby
pod 'GSRNNate'
```

## 使用

```objective-c
#import <SDK/SDK.h>

[[GSGInclusiveManager shareManager] registerSDK:@"6"];
GSGHostInfoModel *model = [[GSGHostInfoModel alloc] init];
model.mkMappingId = mkMappingId;
model.authcode = authcode;
model.channelId = @"6";
model.mobilePhone = phone;
[manager initializationSDK:model delegate:self];
```

## Author

lilly, 102229995@qq.com

## License

GSRNNate is available under the MIT license. See the LICENSE file for more info.