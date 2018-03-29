//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage;

@interface SCSnapReplayOperaLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    NSString *_messageId;
    NSString *_conversationId;
    long long _playbackState;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

