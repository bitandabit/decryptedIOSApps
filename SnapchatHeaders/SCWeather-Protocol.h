//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCWeather <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long weatherFilterViewType;
@property(readonly, copy, nonatomic) NSArray *dailyForecasts;
@property(readonly, copy, nonatomic) NSArray *hourlyForecasts;
@property(readonly, copy, nonatomic) NSString *locationName;
@property(readonly, nonatomic) float fahrenheit;
@property(readonly, nonatomic) float celsius;
@end

