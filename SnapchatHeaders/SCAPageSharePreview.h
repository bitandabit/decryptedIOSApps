//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAPageSharePreview : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *withCaption;
    NSNumber *recipientCount;
    long long type;
    long long mediaType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getType;
- (void)setType:(long long)arg1;
- (long long)getRecipientCount;
- (void)setRecipientCount:(long long)arg1;
- (_Bool)getWithCaption;
- (void)setWithCaption:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
