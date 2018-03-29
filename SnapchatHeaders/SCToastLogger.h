//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumberFormatter;

@interface SCToastLogger : NSObject
{
    NSNumberFormatter *_decimalFormatter;
}

+ (id)shared;
@property(retain, nonatomic) NSNumberFormatter *decimalFormatter; // @synthesize decimalFormatter=_decimalFormatter;
- (void).cxx_destruct;
- (void)displayToastForEvent:(id)arg1 params:(id)arg2;
- (void)logTimedEventEnd:(id)arg1 uniqueId:(id)arg2 parameters:(id)arg3;
- (void)logTimedEventStart:(id)arg1 uniqueId:(id)arg2 isUniqueEvent:(_Bool)arg3;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logEvent:(id)arg1;

@end
