//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol SCSearchCardContainerContentViewControllerContextDelegate;

@interface SCSearchCardContainerContentViewControllerContext : NSObject
{
    _Bool _loadingContent;
    NSArray *_tabBarItems;
    unsigned long long _selectedTabIndex;
    id <SCSearchCardContainerContentViewControllerContextDelegate> _delegate;
    struct UIEdgeInsets _layoutInsets;
}

@property(nonatomic) __weak id <SCSearchCardContainerContentViewControllerContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (void)selectTabIndexIfPossible:(unsigned long long)arg1;

@end

