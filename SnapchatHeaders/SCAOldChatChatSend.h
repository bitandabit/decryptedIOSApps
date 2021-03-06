//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAOldChatChatSend : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *charCount;
    NSNumber *positionIndex;
    NSNumber *noteTimeSec;
    NSNumber *batchStackSize;
    NSNumber *camera;
    long long mediaType;
    long long source;
    long long messageType;
    long long drawerViewMode;
    long long mediaDrawerTab;
    NSString *correspondentId;
    NSString *additional_info;
    NSString *stickerId;
    NSString *section;
    NSString *lagunaUserAgent;
    NSString *parcelType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getParcelType;
- (void)setParcelType:(id)arg1;
- (id)getLagunaUserAgent;
- (void)setLagunaUserAgent:(id)arg1;
- (id)getSection;
- (void)setSection:(id)arg1;
- (id)getStickerId;
- (void)setStickerId:(id)arg1;
- (id)getAdditional_info;
- (void)setAdditional_info:(id)arg1;
- (id)getCorrespondentId;
- (void)setCorrespondentId:(id)arg1;
- (long long)getMediaDrawerTab;
- (void)setMediaDrawerTab:(long long)arg1;
- (long long)getDrawerViewMode;
- (void)setDrawerViewMode:(long long)arg1;
- (long long)getMessageType;
- (void)setMessageType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (long long)getBatchStackSize;
- (void)setBatchStackSize:(long long)arg1;
- (double)getNoteTimeSec;
- (void)setNoteTimeSec:(double)arg1;
- (long long)getPositionIndex;
- (void)setPositionIndex:(long long)arg1;
- (long long)getCharCount;
- (void)setCharCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

