//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BCOVAd : NSObject
{
    NSString *_title;
    NSString *_adId;
    NSDictionary *_properties;
    NSDictionary *_privateProperties;
    CDStruct_1b6d18a9 _beginTime;
    CDStruct_1b6d18a9 _duration;
}

@property(copy, nonatomic) NSDictionary *privateProperties; // @synthesize privateProperties=_privateProperties;
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToAd:(id)arg1;
- (id)initWithTitle:(id)arg1 adId:(id)arg2 beginTime:(CDStruct_1b6d18a9)arg3 duration:(CDStruct_1b6d18a9)arg4 properties:(id)arg5;
- (id)init;

@end

