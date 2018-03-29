//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIImage;

@interface SPTShareEntityData : NSObject
{
    NSString *_itemTitle;
    NSString *_itemSubtitle;
    NSURL *_itemURI;
    NSURL *_itemContextSourceURI;
    NSString *_itemName;
    NSString *_creatorName;
    NSString *_sourceName;
    NSURL *_imageURL;
    unsigned long long _itemType;
    NSString *_clipboardLinkTitle;
    NSString *_shareBrowselinkId;
    UIImage *_shareScreenshotImage;
    NSString *_logContext;
    UIImage *_image;
    NSString *_comment;
    NSArray *_itemDescriptionComponents;
}

@property(retain, nonatomic) NSArray *itemDescriptionComponents; // @synthesize itemDescriptionComponents=_itemDescriptionComponents;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) UIImage *shareScreenshotImage; // @synthesize shareScreenshotImage=_shareScreenshotImage;
@property(readonly, nonatomic) NSString *shareBrowselinkId; // @synthesize shareBrowselinkId=_shareBrowselinkId;
@property(readonly, nonatomic) NSString *clipboardLinkTitle; // @synthesize clipboardLinkTitle=_clipboardLinkTitle;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(readonly, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSURL *itemContextSourceURI; // @synthesize itemContextSourceURI=_itemContextSourceURI;
@property(readonly, nonatomic) NSURL *itemURI; // @synthesize itemURI=_itemURI;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *itemSubtitle; // @synthesize itemSubtitle=_itemSubtitle;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) NSURL *webURI;
- (id)generateShareId;
- (void)setupShareBrowselinkId;
- (id)initWithItemURI:(id)arg1 contextSourceURI:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6 shareScreenshotImage:(id)arg7 itemType:(unsigned long long)arg8 clipboardLinkTitle:(id)arg9 logContext:(id)arg10;

@end
