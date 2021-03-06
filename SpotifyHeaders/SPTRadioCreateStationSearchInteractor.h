//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchExternalViewControllerDelegate.h"
#import "UISearchBarDelegate.h"

@class NSString, SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService, SPTSearchExternalViewController, UIViewController;

@interface SPTRadioCreateStationSearchInteractor : NSObject <SPTSearchExternalViewControllerDelegate, UISearchBarDelegate>
{
    SPTSearchExternalViewController *_searchViewController;
    UIViewController *_parentVC;
    SPTRadioStationsService *_stationService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioLogger *_loggingService;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak SPTSearchExternalViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectEntityWithURL:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6;
- (id)provideInitialViewControllerForSearchViewController:(id)arg1;
- (id)initWithStationService:(id)arg1 playbackService:(id)arg2 loggingService:(id)arg3 linkDispatcher:(id)arg4 parentViewController:(id)arg5 searchViewController:(id)arg6 alertController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

