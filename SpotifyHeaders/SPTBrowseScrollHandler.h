//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBViewControllerDefaultScrollHandler.h"

@class NSNumber;

@interface SPTBrowseScrollHandler : HUBViewControllerDefaultScrollHandler
{
    NSNumber *_customContentTopInset;
    CDUnknownBlockType _scrollViewDidScrollHandler;
}

@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollHandler; // @synthesize scrollViewDidScrollHandler=_scrollViewDidScrollHandler;
@property(retain, nonatomic) NSNumber *customContentTopInset; // @synthesize customContentTopInset=_customContentTopInset;
- (void).cxx_destruct;
- (void)scrollViewDidScrollInViewController:(id)arg1 withContentOffset:(struct CGPoint)arg2;
- (struct UIEdgeInsets)contentInsetsForViewController:(id)arg1 proposedContentInsets:(struct UIEdgeInsets)arg2;

@end
