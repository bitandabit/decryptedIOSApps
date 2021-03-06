//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCMadeWithLensesThumbnailView;
@protocol SCCanceling, SCGalleryViewCellSelecting, SCGalleryViewCellUpdating;

@interface SCGalleryMadeWithLensesStaticItemViewCell : UICollectionViewCell
{
    SCMadeWithLensesThumbnailView *_thumbnailView;
    id <SCCanceling> _imageLoadingRequest;
    id <SCGalleryViewCellSelecting> _selectable;
    id <SCGalleryViewCellUpdating> _updatable;
}

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)setPlaceholderImageFuture:(id)arg1 processedImageFuture:(id)arg2 originalImageFuture:(id)arg3;
- (void)prepareForReuse;
- (void)_setupUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

