//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTResubModalEventLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)sendLogMessageWithType:(id)arg1 daysLeft:(long long)arg2;
- (void)logActionModalDismissedBySystem:(long long)arg1;
- (void)logActionModalDismissedByUser:(long long)arg1;
- (void)logImpressionModalPresented:(long long)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

