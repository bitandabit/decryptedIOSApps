//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubViewHandler.h"
#import "SPTPopoverControllerDelegate.h"
#import "SPTSearchExternalViewControllerDelegate.h"

@class NSString, SPTPopoverController, SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService;

@interface SPTRadioHubViewHandler : NSObject <SPTSearchExternalViewControllerDelegate, SPTPopoverControllerDelegate, SPTHubViewHandler>
{
    id <SPTHubViewHandlerDelegate> _delegate;
    id <SPTSearchService> _searchService;
    SPTRadioLogger *_loggingService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioStationsService *_stationService;
    SPTPopoverController *_searchPopoverController;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTPopoverController *searchPopoverController; // @synthesize searchPopoverController=_searchPopoverController;
@property(retain, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTSearchService> searchService; // @synthesize searchService=_searchService;
@property(nonatomic) __weak id <SPTHubViewHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissSearchPopoverControllerAnimated:(_Bool)arg1;
- (void)playAndSaveEntityWithURL:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectEntityWithURL:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6;
- (void)dismissSearch:(CDUnknownBlockType)arg1;
- (id)provideInitialViewControllerForSearchViewController:(id)arg1;
- (void)searchViewController:(id)arg1 willOpenURL:(id)arg2;
- (void)newStationTapped:(id)arg1;
- (_Bool)handleHubBlockHeaderAccessoryButtonPress:(id)arg1 withTargetURL:(id)arg2 viewController:(id)arg3;
- (_Bool)handleSelectionForHubItem:(id)arg1 atIndexPath:(struct SPTHubIndexPath)arg2 viewController:(id)arg3;
- (_Bool)handleHubHeaderButtonPressWithTargetURL:(id)arg1 viewController:(id)arg2;
- (struct UIEdgeInsets)insetsForHubBlockAtIndex:(unsigned long long)arg1;
- (id)overlayViewForHubItem:(id)arg1 atIndexPath:(struct SPTHubIndexPath)arg2 itemViewSize:(struct CGSize)arg3;
- (id)metaDataPrefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1 viewURI:(id)arg2;
- (id)prefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)infoViewForEmptyHubWithViewURI:(id)arg1 viewController:(id)arg2;
- (void)handleHubDidFinishLoadingContentForViewURI:(id)arg1;
- (id)rightNavigationBarButtonItemForHubWithViewURI:(id)arg1;
- (id)initWithSearchService:(id)arg1 loggingService:(id)arg2 playbackService:(id)arg3 stationService:(id)arg4 alertController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

