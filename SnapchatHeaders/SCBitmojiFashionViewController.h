//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCBitmojiBuilderListener-Protocol.h"
#import "SCBitmojiFittingRoomViewDelegate-Protocol.h"
#import "SCBitmojiOutfitCollectionSourceDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiFashionView, SCBitmojiLogger, SCBitmojiOutfit, SCBitmojiOutfitBrand, SCBitmojiOutfitCollectionSource, SCUserSession;

@interface SCBitmojiFashionViewController : GenericSettingsViewController <SCBitmojiOutfitCollectionSourceDelegate, SCBitmojiFittingRoomViewDelegate, SCBitmojiBuilderListener>
{
    SCUserSession *_userSession;
    unsigned long long _page;
    SCBitmojiLogger *_logger;
    SCBitmojiFashionView *_fashionView;
    SCBitmojiOutfitCollectionSource *_outfitCollectionSource;
    SCBitmojiOutfit *_selectedOutfit;
    SCBitmojiOutfitBrand *_selectedBrand;
    _Bool _hasUnsavedChange;
    int _tapNumOnAvatarPreview;
    NSArray *_avatarTemplateIds;
}

- (void).cxx_destruct;
- (void)_refreshView:(id)arg1;
- (void)_showLeaveBitmojiFashionAlert;
- (id)_getTemplateId;
- (void)outfitPackDidChange;
- (_Bool)disableLeftSwipe;
- (void)didPressAvatarPreview:(id)arg1;
- (void)didPressSaveButtonInFittingRoomView:(id)arg1 saveButton:(id)arg2;
- (void)didPressBackButtonInFittingRoomView:(id)arg1;
- (void)_refreshAvatarPreview:(id)arg1 templateId:(id)arg2;
- (void)_refreshStore:(id)arg1;
- (void)didSelectBrandSection:(id)arg1 outfitItem:(id)arg2 collectionSource:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 page:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

