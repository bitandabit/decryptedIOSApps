//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCGalleryCellTransitioning-Protocol.h"
#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"
#import "SCGalleryHighlightViewCellProtocol-Protocol.h"
#import "SCGalleryViewCellSelecting-Protocol.h"

@class CAShapeLayer, FLAnimatedImageView, NSString, SCGalleryEntrySyncStatusGenerator, SCUserSession, UIButton, UIImageView, UIView;
@protocol SCCachingMediaRequest, SCCanceling, SCGalleryHighlightViewCellDelegate, SCGallerySnap;

@interface SCGalleryHighlightViewCell : UICollectionViewCell <SCGalleryHighlightViewCellProtocol, SCGalleryViewCellSelecting, SCGalleryCellTransitioning, SCGalleryEntrySyncStatusGeneratorDelegate>
{
    id <SCGallerySnap> _snap;
    SCUserSession *_userSession;
    id <SCCachingMediaRequest> _mediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    UIView *_container;
    FLAnimatedImageView *_imageView;
    UIImageView *_lagunaIcon;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    CDStruct_bac8f6e9 _mediaScenePath;
    _Bool _shouldStartGeneratingUpdates;
    CAShapeLayer *_roundCornerMaskLayer;
    struct CGSize _targetSize;
    UIButton *_deleteButton;
    unsigned long long _cornerToRound;
    id <SCGalleryHighlightViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryHighlightViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)setInitialImage:(id)arg1;
- (id)itemForMode:(unsigned long long)arg1;
- (id)expandingViewForMode:(unsigned long long)arg1;
- (id)imageForMode:(unsigned long long)arg1;
- (id)posterFrameForMode:(unsigned long long)arg1;
- (void)exitSelectionMode;
- (void)enterSelectionMode:(unsigned long long)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (unsigned long long)interactionMode;
- (unsigned long long)selectionModeAtTouchLocation:(struct CGPoint)arg1;
- (void)setSelectedWithMode:(unsigned long long)arg1 forSnap:(id)arg2 selectOverlayImage:(id)arg3;
- (void)setSelectedWithMode:(unsigned long long)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)_updateImage:(id)arg1;
- (void)_requestImage:(id)arg1;
- (void)_requestThumbnail:(id)arg1;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)roundCorner:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setSnap:(id)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentsUnloaded:(_Bool)arg4 userSession:(id)arg5;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_handleDelete;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

