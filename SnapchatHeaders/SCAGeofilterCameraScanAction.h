//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAGeofilterCameraScanAction : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long scanActionType;
    long long source;
    long long scanType;
    long long action;
    NSString *scanData;
    NSString *scannableId;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *contentId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getContentId;
- (void)setContentId:(id)arg1;
- (id)getFilterGeolensId;
- (void)setFilterGeolensId:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getScannableId;
- (void)setScannableId:(id)arg1;
- (id)getScanData;
- (void)setScanData:(id)arg1;
- (long long)getAction;
- (void)setAction:(long long)arg1;
- (long long)getScanType;
- (void)setScanType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getScanActionType;
- (void)setScanActionType:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

