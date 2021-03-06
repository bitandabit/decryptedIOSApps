//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface AMPEventLoggerProvider : NSObject
{
    struct NSArray *_defaultLoggers;
    struct NSDictionary *_eventPrefixToLoggers;
    struct NSDictionary *_eventNameToLoggers;
}

@property(retain, nonatomic) NSDictionary *eventNameToLoggers; // @synthesize eventNameToLoggers=_eventNameToLoggers;
@property(retain, nonatomic) NSDictionary *eventPrefixToLoggers; // @synthesize eventPrefixToLoggers=_eventPrefixToLoggers;
@property(retain, nonatomic) NSArray *defaultLoggers; // @synthesize defaultLoggers=_defaultLoggers;
- (void).cxx_destruct;
- (struct NSArray *)_prefixMatchLoggersForEventName:(id)arg1;
- (struct NSArray *)getLoggersForEventName:(id)arg1;
- (id)initWithDefaultLoggers:(struct NSArray *)arg1 eventNameToLoggers:(struct NSDictionary *)arg2 eventPrefixToLoggers:(struct NSDictionary *)arg3;

@end

