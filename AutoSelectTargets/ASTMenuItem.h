//
//  ATMenuItem.h
//  AllTargets
//
//  Created by Francisco Trujillo on 22/08/2016.
//  Copyright © 2016 Jobs. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class ASTSavedData;

@protocol ASTMenuItemDelegate;

@interface ASTMenuItem : NSMenuItem

@property (nonatomic, weak) id<ASTMenuItemDelegate> delegate;

- (instancetype)initWithSavedData:(ASTSavedData *)savedData;

@end

@protocol ASTMenuItemDelegate <NSObject>

- (void)menuItem:(ASTMenuItem *)menuItem didUpdateSavedData:(ASTSavedData *)savedData;

@end
