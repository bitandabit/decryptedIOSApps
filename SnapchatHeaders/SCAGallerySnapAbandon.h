//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAGallerySnapAbandon : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long operationType;
    long long errorReason;
    NSString *snapId;
    NSString *mediaId;
    NSString *entryId;
    NSString *requestId;
    NSString *errorMessage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getErrorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)getRequestId;
- (void)setRequestId:(id)arg1;
- (id)getEntryId;
- (void)setEntryId:(id)arg1;
- (id)getMediaId;
- (void)setMediaId:(id)arg1;
- (id)getSnapId;
- (void)setSnapId:(id)arg1;
- (long long)getErrorReason;
- (void)setErrorReason:(long long)arg1;
- (long long)getOperationType;
- (void)setOperationType:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
