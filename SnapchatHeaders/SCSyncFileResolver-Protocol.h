//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSURL;
@protocol SCGallerySnap, SCGallerySnapDetail;

@protocol SCSyncFileResolver <NSObject>
- (NSData *)renderedLowresMediaForSnap:(id <SCGallerySnap>)arg1 detail:(id <SCGallerySnapDetail>)arg2;
- (NSURL *)renderedLowresMediaCachedURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)HDMediaCachedURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)mediaCachedOverlayURLForSnap:(id <SCGallerySnap>)arg1;
- (NSURL *)mediaCachedURLForSnap:(id <SCGallerySnap>)arg1;
@end
