//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaViewVideoRenderer.h"

@interface SPTFBMediaViewVideoRenderer : FBMediaViewVideoRenderer
{
    _Bool _videoPaused;
    id <SPTFBMediaViewVideoRendererDelegate> _delegate;
}

@property(nonatomic, getter=isVideoPaused) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic) __weak id <SPTFBMediaViewVideoRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidPause;
- (void)videoDidPlay;
- (void)videoDidLoad;

@end

