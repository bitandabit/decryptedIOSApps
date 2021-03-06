//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCLensInitEvent : NSObject
{
    NSString *_categoryId;
    NSString *_eventId;
    NSString *_lensSessionId;
    unsigned long long _managedLensesProcessorCoreState;
}

- (void).cxx_destruct;
- (id)_stringFromGestureType:(unsigned long long)arg1;
- (id)_stateNameFromCoreState:(unsigned long long)arg1;
- (void)setLensSessionId:(id)arg1;
- (void)setCategoryId:(id)arg1;
- (void)logFailureEvent;
- (void)logSuccessEvent;
- (id)_eventParameters;
- (id)initWithLensProcessorCoreState:(unsigned long long)arg1;

@end

