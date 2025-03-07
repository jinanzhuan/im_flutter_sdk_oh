//
//  EMSilentModeTime+Helper.m
//  im_flutter_sdk
//
//  Created by 杜洁鹏 on 2022/7/11.
//

#import "SilentModeTimeHelper.h"

@implementation EMSilentModeTime (Helper)
+ (EMSilentModeTime *)fromJson:(NSDictionary *)dict {
    int hour = [dict[@"hour"] intValue];
    int minute = [dict[@"minute"] intValue];
    return [[EMSilentModeTime alloc] initWithHours:hour minutes:minute];
}
- (NSDictionary *)toJson {
    return @{@"hour":@(self.hours), @"minute": @(self.minutes)};
}


@end
