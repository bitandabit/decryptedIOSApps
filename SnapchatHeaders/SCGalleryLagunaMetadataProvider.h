//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCUserSession, SOJUGallerySnapOverlay;
@protocol SCPreviewFilterDataProvider;

@interface SCGalleryLagunaMetadataProvider : NSObject
{
    id <SCPreviewFilterDataProvider> _filterDataProvider;
    _Bool _running;
    SOJUGallerySnapOverlay *_cachedOverlay;
    double _cachedOverlayTimestamp;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)overlay;
- (_Bool)_cacheExpired;
- (id)location;
- (void)endUpdatingMetadata;
- (void)startUpdatingMetadata;
- (id)initWithUserSession:(id)arg1;

@end

