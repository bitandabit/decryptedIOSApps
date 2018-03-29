//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "BCOVPlaybackSessionPrivate-Protocol.h"

@class AVPlayer, AVPlayerLayer, BCOVSSResourcePolicy, BCOVSessionProviderExtension, BCOVSource, BCOVVideo, NSString, UIView;
@protocol BCOVPlaybackSessionPrivate;

@interface BCOVSSPlaybackSession : NSObject <BCOVPlaybackSessionPrivate, AVAssetResourceLoaderDelegate>
{
    id <BCOVPlaybackSessionPrivate> _innerPlaybackSession;
    BCOVSSResourcePolicy *_resourcePolicy;
}

@property(retain, nonatomic) BCOVSSResourcePolicy *resourcePolicy; // @synthesize resourcePolicy=_resourcePolicy;
@property(retain, nonatomic) id <BCOVPlaybackSessionPrivate> innerPlaybackSession; // @synthesize innerPlaybackSession=_innerPlaybackSession;
- (void).cxx_destruct;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPlaybackSession:(id)arg1 resourcePolicy:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AVPlayer *player; // @dynamic player;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @dynamic playerLayer;
@property(readonly, nonatomic) UIView *playerLayerView; // @dynamic playerLayerView;
@property(readonly, nonatomic) BCOVSessionProviderExtension *providerExtension; // @dynamic providerExtension;
@property(readonly, copy, nonatomic) BCOVSource *source; // @dynamic source;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) BCOVVideo *video; // @dynamic video;

@end

