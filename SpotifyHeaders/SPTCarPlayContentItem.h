//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPContentItem.h"

#import "SPTImageLoaderDelegate.h"

@class NSCache, NSString;

@interface SPTCarPlayContentItem : MPContentItem <SPTImageLoaderDelegate>
{
    _Bool _didLoadArtwork;
    id <SPTExternalIntegrationContent> _content;
    id <SPTImageLoader> _imageLoader;
    NSCache *_iconCache;
}

@property(readonly, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool didLoadArtwork; // @synthesize didLoadArtwork=_didLoadArtwork;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setArtworkImage:(id)arg1;
- (void)configurePlaceholderArtwork;
- (void)loadArtwork;
- (id)initWithExternalIntegrationContent:(id)arg1 imageLoader:(id)arg2 iconCache:(id)arg3 playable:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

