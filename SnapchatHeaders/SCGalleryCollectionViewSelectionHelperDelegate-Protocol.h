//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SCGalleryCollectionViewSelectionHelper, UILongPressGestureRecognizer;

@protocol SCGalleryCollectionViewSelectionHelperDelegate <NSObject>
- (_Bool)galleryCollectionViewIsFullyVisible:(SCGalleryCollectionViewSelectionHelper *)arg1;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 handleLongPress:(UILongPressGestureRecognizer *)arg2 itemAtIndexPath:(NSIndexPath *)arg3 selectionMode:(unsigned long long)arg4;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didTapItemAtIndexPath:(NSIndexPath *)arg2 selectionMode:(unsigned long long)arg3;
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 didChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 shouldChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 isItemInteractionEnabledAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)galleryCollectionViewSelectionHelper:(SCGalleryCollectionViewSelectionHelper *)arg1 overrideDidChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

