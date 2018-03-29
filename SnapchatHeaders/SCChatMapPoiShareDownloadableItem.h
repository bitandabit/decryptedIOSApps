//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMediaDownloadableItem-Protocol.h"

@class NSString;

@interface SCChatMapPoiShareDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    NSString *_poiId;
    NSString *_conversationId;
}

@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (id)mediaId;
- (id)initWithMapPoiId:(id)arg1 conversationId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

