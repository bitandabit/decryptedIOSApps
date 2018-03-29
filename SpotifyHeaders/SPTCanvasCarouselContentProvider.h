//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingCarouselContentProvider.h"

@class NSString, SPTCanvasViewController;

@interface SPTCanvasCarouselContentProvider : NSObject <SPTNowPlayingCarouselContentProvider>
{
    SPTCanvasViewController *_canvasViewController;
}

@property(retain, nonatomic) SPTCanvasViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
- (void).cxx_destruct;
- (void)updateWithTrack:(id)arg1 imageURL:(id)arg2;
- (void)setActive:(_Bool)arg1;
- (_Bool)shouldReplaceCoverArt;
- (_Bool)shouldRenderContent;
- (id)provideContent;
- (id)initWithCanvasViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
