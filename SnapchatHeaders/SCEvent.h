//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SCEvent : NSObject
{
    NSString *_eventName;
    NSDictionary *_parameters;
    NSDictionary *_secretParameters;
    NSDictionary *_metrics;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSDictionary *secretParameters; // @synthesize secretParameters=_secretParameters;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;

@end
