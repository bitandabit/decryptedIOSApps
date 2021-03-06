//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTSearchHistoryLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUserInteractionWithClearHistoryControlForNumberOfSavedSearchStrings:(unsigned long long)arg1;
- (void)logUserInteractionForRemovedHistorySearchString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)logUserInteractionWithHistorySearchString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithLogCenter:(id)arg1;

@end

