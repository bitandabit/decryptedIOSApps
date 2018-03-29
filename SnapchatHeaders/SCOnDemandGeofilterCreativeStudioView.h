//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTransparentParentView.h"

#import "SCCaptionStylezCarouselDataProvider-Protocol.h"
#import "SCCaptionStylezCarouselDelegate-Protocol.h"
#import "SCMultiCaptionManagerDelegate-Protocol.h"
#import "SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItemDelegate-Protocol.h"
#import "SCOnDemandGeofilterCreativeStudioToolbarDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterStickerManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCGradientView, SCGrowingButton, SCMultiCaptionManager, SCOnDemandGeofilterCreativeSafeZoneView, SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItem, SCOnDemandGeofilterCreativeStudioToolbar, SCOnDemandGeofilterCreativeStudioToolbarButtonItem, SCOnDemandGeofilterStickerManager, SOJUUnlockablesOndemandStylizedText, UIFont, UIImage, UIView;
@protocol SCOnDemandGeofilterCreativeStudioViewDelegate, SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterCreativeStudioView : SCTransparentParentView <SCMultiCaptionManagerDelegate, SCOnDemandGeofilterStickerManagerDelegate, SCOnDemandGeofilterCreativeStudioToolbarDelegate, SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItemDelegate, SCCaptionStylezCarouselDelegate, SCCaptionStylezCarouselDataProvider, UIGestureRecognizerDelegate, SCOnDemandGeofilterDataControllerListener>
{
    SCGradientView *_rightGradient;
    SCGradientView *_bottomGradient;
    SCOnDemandGeofilterCreativeStudioCaptionToolbarButtonItem *_toolbarCaptionItem;
    SCOnDemandGeofilterCreativeStudioToolbarButtonItem *_toolbarUniversalTrashcanItem;
    SCTransparentParentView *_contentView;
    SCMultiCaptionManager *_captionManager;
    SCOnDemandGeofilterStickerManager *_stickerManager;
    SCGrowingButton *_dismissButton;
    SCGrowingButton *_sendButton;
    UIFont *_templateDefaultFont;
    SCOnDemandGeofilterCreativeSafeZoneView *_topSafeZone;
    SCOnDemandGeofilterCreativeSafeZoneView *_bottomSafeZone;
    NSArray *_initialTextBoxes;
    UIImage *_fetchImage;
    SOJUUnlockablesOndemandStylizedText *_selectedStylizedTextPreset;
    SCOnDemandGeofilterCreativeSafeZoneView *_cameraSafeCarousel;
    UIView *_overlayView;
    _Bool _shouldCreativeStudioDismiss;
    _Bool _gradientsEnabled;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    id <SCOnDemandGeofilterCreativeStudioViewDelegate> _delegate;
    SCOnDemandGeofilterCreativeStudioToolbar *_toolbar;
    UIView *_iconsContainerView;
}

@property(nonatomic) _Bool gradientsEnabled; // @synthesize gradientsEnabled=_gradientsEnabled;
@property(nonatomic) _Bool shouldCreativeStudioDismiss; // @synthesize shouldCreativeStudioDismiss=_shouldCreativeStudioDismiss;
@property(retain, nonatomic) UIView *iconsContainerView; // @synthesize iconsContainerView=_iconsContainerView;
@property(retain, nonatomic) SCOnDemandGeofilterCreativeStudioToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak id <SCOnDemandGeofilterCreativeStudioViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (void).cxx_destruct;
- (void)_generateStylizedTextPreviewImages;
- (id)stylizedTextPresets;
- (void)styleSelected:(id)arg1;
- (_Bool)_templateModified;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 toSize:(struct CGSize)arg2;
- (double)_textBoxVerticalOffset;
- (double)_implicitScreenHeight;
- (void)_addDraftTextBoxes:(id)arg1 animated:(_Bool)arg2;
- (void)_addCaptions:(id)arg1 animated:(_Bool)arg2;
- (id)_generateDraftTextBoxArray;
- (void)_addStickers:(id)arg1;
- (id)_generateStickerMetadataArray;
- (void)_captionLoadingCompleted;
- (void)_addCreativeData;
- (void)lensSelected;
- (void)templateLoaded:(_Bool)arg1;
- (id)_stickerTypeToString:(unsigned long long)arg1;
- (id)_stickerIdFor:(id)arg1;
- (_Bool)isGeoSticker:(id)arg1;
- (id)_stickerBoxArray;
- (id)_textBoxArray;
- (void)captionToolBarButtonItem:(id)arg1 didChangeColor:(id)arg2;
- (void)_showStickerPicker;
- (void)_updateForStickerItem:(_Bool)arg1;
- (void)_updateForCaptionItem:(_Bool)arg1;
- (void)dataController:(id)arg1 didUpdateCreativeData:(id)arg2;
- (void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(_Bool)arg3;
- (void)previewToolBar:(id)arg1 itemDidChangeSelectedState:(id)arg2;
- (void)deleteAssetRelatedDataFromLineItem;
- (id)_renderViewToImageForShorterPhones:(id)arg1;
- (id)_renderViewToImage:(id)arg1;
- (void)_generatePNGImageData:(CDUnknownBlockType)arg1;
- (unsigned long long)_friendmojiStickersCount;
- (unsigned long long)_nonSelfbitmojiStickersCount;
- (unsigned long long)_bitmojiStickersCount;
- (void)_saveMetadataToSession;
- (void)_compressGeofilterTemplate:(CDUnknownBlockType)arg1;
- (_Bool)trashcanContains:(struct CGPoint)arg1;
- (void)stickerManagerStickerIsPanning:(id)arg1;
- (void)multiCaptionManagerCaptionIsPanning:(id)arg1;
- (void)captionDidEndEditing;
- (void)captionDidStartEditing;
- (void)captionWasTapped;
- (id)defaultFontForNewCaption;
- (void)_updateDismissButtonAndSaveButtonState;
- (void)_saveDraft;
- (void)_presentSaveDraftAlertView;
- (void)_dismissPreviewEditor;
- (id)_renderContentViewAsUIImage;
- (void)_generateAndUploadCombinedImage;
- (void)_updatePreviewThumbnailImage:(id)arg1;
- (void)_endImageRenderAndUpdatePreviewThumbnailImage;
- (void)_startPreviewThumbnailRender;
- (void)_generatePreviewThumbnailImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendButtonAction;
- (void)_setupGradients;
- (void)updateCreativeData:(id)arg1;
- (void)closeActiveTool;
- (void)openToolbarItemType:(long long)arg1;
- (void)_toolbarButtonTapped:(id)arg1;
- (struct CGRect)_toolbarFrame;
- (void)_setupToolbar;
- (void)setInteractionEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 geofilterSession:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
