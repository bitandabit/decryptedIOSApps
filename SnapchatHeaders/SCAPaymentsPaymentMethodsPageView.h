//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAPaymentsPaymentMethodsPageView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *pageSequenceId;
    NSNumber *viewTimeSec;
    long long pageName;
    long long previousPage;
    long long nextPage;
    long long exitEvent;
    NSString *paymentsSessionId;
    NSString *adAccountId;
    NSString *source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getSource;
- (void)setSource:(id)arg1;
- (id)getAdAccountId;
- (void)setAdAccountId:(id)arg1;
- (id)getPaymentsSessionId;
- (void)setPaymentsSessionId:(id)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getNextPage;
- (void)setNextPage:(long long)arg1;
- (long long)getPreviousPage;
- (void)setPreviousPage:(long long)arg1;
- (long long)getPageName;
- (void)setPageName:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (long long)getPageSequenceId;
- (void)setPageSequenceId:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

