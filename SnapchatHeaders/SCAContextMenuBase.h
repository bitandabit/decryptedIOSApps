//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAContextMenuBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long sourceMediaType;
    long long source;
    NSString *contextRequestId;
    NSString *filterVenueId;
    NSString *filterGeofilterId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (id)getContextRequestId;
- (void)setContextRequestId:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getSourceMediaType;
- (void)setSourceMediaType:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
