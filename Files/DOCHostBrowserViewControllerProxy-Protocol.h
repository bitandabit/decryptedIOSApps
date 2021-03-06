//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DOCConcreteLocation, DOCItem, NSArray, NSString;

@protocol DOCHostBrowserViewControllerProxy
- (void)didTriggerFPUIActionWithIdentifier:(NSString *)arg1 providerIdentifier:(NSString *)arg2 domainIdentifier:(NSString *)arg3 title:(NSString *)arg4 onItems:(NSArray *)arg5;
- (void)didTriggerActionWithIdentifier:(NSString *)arg1 onItems:(NSArray *)arg2;
- (void)builtinActionsDidChange:(NSArray *)arg1;
- (void)didPickLocation:(DOCConcreteLocation *)arg1 forceReplaceLocation:(_Bool)arg2;
- (void)browserDidFinishGatheringItemsAndThumbnails;
- (void)browserDidUpdateNumberOfItems:(unsigned long long)arg1;
- (void)browserIsDisplayingEmptyCollection:(_Bool)arg1;
- (void)browserDismissButtonWasTapped;
- (void)browserLocationsButtonWasTappedWithSourceRect:(struct CGRect)arg1;
- (void)didUpdateCurrentLocationCanSelect:(_Bool)arg1;
- (void)didUpdateCurrentLocationIsWritable:(_Bool)arg1;
- (void)didUpdateImportSupportInCurrentLocation:(_Bool)arg1;
- (void)didSelectItems:(NSArray *)arg1;
- (void)didCommitPreviewOfDocument:(DOCItem *)arg1;
- (void)didPickItem:(DOCItem *)arg1;
- (void)showInfoForItem:(DOCItem *)arg1;
- (void)createNewFolder;
- (void)createNewFile;
@end

