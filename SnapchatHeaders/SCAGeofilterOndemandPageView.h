//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGeofilterOndemandPageView : SCAGeofilterOndemandEventBase <MapSerializable, NSCopying>
{
    NSNumber *viewTimeSec;
    NSNumber *isPendingCollection;
    long long previousPage;
    long long nextPage;
    long long exitEvent;
    NSString *lineItemId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLineItemId;
- (void)setLineItemId:(id)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getNextPage;
- (void)setNextPage:(long long)arg1;
- (long long)getPreviousPage;
- (void)setPreviousPage:(long long)arg1;
- (_Bool)getIsPendingCollection;
- (void)setIsPendingCollection:(_Bool)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

