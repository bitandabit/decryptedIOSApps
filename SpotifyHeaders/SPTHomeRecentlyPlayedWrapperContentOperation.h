//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBContentOperation.h"
#import "HUBContentOperationDelegate.h"

@class NSString;

@interface SPTHomeRecentlyPlayedWrapperContentOperation : NSObject <HUBContentOperationDelegate, HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <HUBContentOperation> _recentlyPlayedContentOperation;
    NSString *_componentModelIdentifier;
    id <SPTLocalSettings> _localSettings;
    id <HUBViewModelBuilder> _viewModelBuilder;
}

@property(retain, nonatomic) id <HUBViewModelBuilder> viewModelBuilder; // @synthesize viewModelBuilder=_viewModelBuilder;
@property(readonly, nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, copy, nonatomic) NSString *componentModelIdentifier; // @synthesize componentModelIdentifier=_componentModelIdentifier;
@property(retain, nonatomic) id <HUBContentOperation> recentlyPlayedContentOperation; // @synthesize recentlyPlayedContentOperation=_recentlyPlayedContentOperation;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contentOperationRequiresRescheduling:(id)arg1;
- (void)contentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationDidFinish:(id)arg1;
- (void)placeRecentlyPlayedShelf;
- (void)setPlaceholderImagesForRecentlyPlayedItems:(id)arg1;
- (void)performForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 previousError:(id)arg5;
- (id)initWithRecentlyPlayedContentOperation:(id)arg1 componentModelIdentifier:(id)arg2 andLocalSettings:(id)arg3;

@end

